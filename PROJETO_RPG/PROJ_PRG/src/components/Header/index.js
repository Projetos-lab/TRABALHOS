import React from 'react';
import {View, Image,Dimensions } from 'react-native';

import {
  Container,
  ContentImagem,
  ContentInfo,
  ContentHeader,
  Name,
  Contentname,
  Class,
  ContentClass,
} from './styles';

export default function Header() {
  return (
    <>
      <Container>
        <ContentHeader>
          <Image
            style={{
              width: Dimensions.get('window').width/4.5,
              height: Dimensions.get('window').height/8.5,
              borderRadius: 50,
              // padding: 10,

            }}
            source={require('~/assets/header/mage.png')}
          />
          <ContentInfo>
            <Contentname>
              <Name>Player</Name>
            </Contentname>
            <ContentClass>
              <Class>CLASSE - SUBCLASSE</Class>
            </ContentClass>
          </ContentInfo>
        </ContentHeader>
      </Container>
    </>
  );
}
