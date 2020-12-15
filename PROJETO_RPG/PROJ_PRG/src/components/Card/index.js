import React from 'react';
import {View, Dimensions, Image} from 'react-native';



import {
  Container,
  ContentNameItem,
  NameItem,
  BackgroundCard,
  ContentDescItem,
  Categoria,
  Desc,
  Content
} from './styles';
export default function Card({data}) {
  const {width,height} =  Dimensions.get('window');

  // id: 6,
  // objectName: 'Escudo Dantalion',
  // obejctType: 'Obj. Unic',
  // iconName: '~/assets/objeto_unico/',
  // damageDescription: 'D5',
  // cardColor: ['',''],
  // detais: 'D5',
  return (
    <>
    <Content>
      <BackgroundCard colorsData={data.cardColor}>
        <Container>
          <ContentDescItem>
            <Categoria>{data.obejctType}</Categoria>
          </ContentDescItem>
          <Image
            style={{
              width: width / 7.5,
              height: height / 15.5,
              alignSelf:'center'
            }}
            source={require('~/assets/objeto_unico/unicObject.png')}
          />
          <ContentNameItem>
            <NameItem>{data.objectName}</NameItem>
          </ContentNameItem>
          <ContentDescItem>
            <Desc>{data.damageDescription}</Desc>
          </ContentDescItem>
        </Container>
      </BackgroundCard>
      </Content>
    </>
  );
}
