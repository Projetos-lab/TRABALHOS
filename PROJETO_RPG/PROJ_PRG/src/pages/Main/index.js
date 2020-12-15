import React, {useState} from 'react';
import {View, Animated, Dimensions} from 'react-native';

import Header from '~/components/Header';
import Card from '~/components/Card';
import Separator from '~/components/Separator';

import {Container, List, ContentList} from './styles';
import {PanGestureHandler} from 'react-native-gesture-handler';
import {
  diffClamp,
  onHandlerStateChange,
  onScrollEvent,
  usePanGestureHandler,
  withDecay,
  withOffset,
} from 'react-native-redash';

export default function Main() {
  // const data = useState([1,2,3,4,5,6])
  const {height} = Dimensions.get('window');
  const MARGIN = 16;
  const HEIGHT = (Dimensions.get('window').height / 4).toFixed(0) + MARGIN * 2;

  const dados = [
    {
      id: 1,
      objectName: 'Lâmina de Thanatos',
      obejctType: 'Obj. Unic',
      iconName: '~/assets/objeto_unico/',
      damageDescription: 'D5',
      cardColor: ['#2234AE', '#191714'],
      detais: 'D5',
    },
    {
      id: 2,
      objectName: 'Arco Rúnico, Astaroth',
      obejctType: 'Obj. Unic',
      iconName: '~/assets/objeto_unico/',
      damageDescription: 'D5',
      cardColor: ['#923CB5', '#000000'],
      detais: 'D5',
    },
    {
      id: 3,
      objectName: 'Besta Barbatos',
      obejctType: 'Obj. Unic',
      iconName: '~/assets/objeto_unico/',
      damageDescription: 'D5',
      cardColor: ['#B82E1F', '#000000'],
      detais: 'D5',
    },
    {
      id: 4,
      objectName: 'Punhais Valefor',
      obejctType: 'Obj. Unic',
      iconName: '~/assets/objeto_unico/',
      damageDescription: 'D5',
      cardColor: ['#00E2C5', '#b5179e'],
      detais: 'D5',
    },
    {
      id: 5,
      objectName: 'Arco Espiritual, Focalor',
      obejctType: 'Obj. Unic',
      iconName: '~/assets/objeto_unico/',
      damageDescription: 'D5',
      cardColor: ['#5a189a', '#00E2C5'],
      detais: 'D5',
    },
    {
      id: 6,
      objectName: 'Escudo Dantalion',
      obejctType: 'Obj. Unic',
      iconName: '~/assets/objeto_unico/',
      damageDescription: 'D5',
      cardColor: ['#5a189a', '#b5179e'],
      detais: 'D5',
    },
    {
      id: 7,
      objectName: 'Umbral, lâminas Estridentes',
      obejctType: 'Obj. Unic',
      iconName: '~/assets/objeto_unico/',
      damageDescription: 'D5',
      cardColor: ['#422419', '#000000'],
      detais: 'D5',
    },
  ];
  /**
   *
   *? animação ---------------------------------------------------------
   */
  const [containerHeight, setContainerHeight] = useState(height);
  const visibleCards = Math.floor(containerHeight / HEIGHT);
  const {gestureHandler, translation, velocity, state} = usePanGestureHandler();

  const translateY = diffClamp(
    withDecay({
      value: translation.y,
      velocity: velocity.y,
      state,
    }),
    -HEIGHT * dados.length + visibleCards * HEIGHT,
    0,
  );
  /**
   * ---------------------------------------------------------------------
   * */
  return (
    <Container>
      <Header />
      <ContentList>
        <List>
          <PanGestureHandler {...gestureHandler}>
            <Animated.View>
              {dados.map((value, index) => {
                return (
                  <Animated.View
                    style={[{trasform: [{translateY}]}]}
                    onLayout={({
                      nativeEvent: {
                        layout: {height: h},
                      },
                    }) => setContainerHeight(h)}
                    key={value.id.toString()}>
                    <Card data={{...value}} />
                  </Animated.View>
                );
              })}
            </Animated.View>
          </PanGestureHandler>
        </List>
      </ContentList>
      <Separator />
    </Container>
  );
}
