import styled from 'styled-components/native';
import {Dimensions} from 'react-native';

export const Container = styled.View`
  /* padding: ${(Dimensions.get('window').height / 56).toFixed(0)}px; */
  justify-content:space-between;
  flex-direction: row;
  align-self: baseline;
`;
export const Quadrado = styled.View`
  width: ${(Dimensions.get('window').width / 45).toFixed(0)}px;
  height: ${(Dimensions.get('window').width / 45).toFixed(0)}px;
  transform: rotate(45deg);
  background: #fff;

`;
export const Linha  = styled.View`
border: #fff;
border-width: 1px;
flex:1;
align-self: baseline;

margin: 15px;
margin-right: 15px;
margin-top: 1%;
`;
