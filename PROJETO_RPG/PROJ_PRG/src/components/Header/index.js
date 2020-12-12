import React from 'react';
import {View, Image} from 'react-native';

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
              width: 90,
              height: 90,
              borderRadius: 50,
              // padding: 10,
              borderColor: '#fff',
              borderWidth: 3,
            }}
            source={require('~/assets/header/mage.png')}
          />
          <ContentInfo>
            <Contentname>
              <Name> SAVIO</Name>
            </Contentname>
            <ContentClass>
              <Class>BARDO - NECROMANTE</Class>
            </ContentClass>
          </ContentInfo>
        </ContentHeader>
      </Container>
    </>
  );
}
