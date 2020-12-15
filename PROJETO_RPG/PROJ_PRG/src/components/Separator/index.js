import React from 'react';
import {View} from 'react-native';

import {Container, Quadrado,Linha} from './styles';

export default function Separator() {
  return (
    <>
      <Container>
        <Linha></Linha>
        <Quadrado />
        <Linha></Linha>
      </Container>
    </>
  );
}
