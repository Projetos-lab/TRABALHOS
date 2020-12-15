import styled from 'styled-components/native';
import LinearGradient from 'react-native-linear-gradient';
import {Dimensions} from 'react-native';

export const Container = styled.View`
  flex: 1;
  display: flex;
  justify-content: space-between;
`;

export const BackgroundCard = styled(LinearGradient).attrs(props =>({
  colors: props.colorsData,

}))`
  flex: 1;
  border-radius: ${(Dimensions.get('window').width / 35).toFixed(0)}px;

  margin: 5px;
  padding: ${(Dimensions.get('window').width / 25).toFixed(0)}px;
`;

export const ContentNameItem = styled.View`
  border-radius: 2px;
  /* border: #fff; */
  justify-content: center;
  /* align-self: auto; */
`;
export const NameItem = styled.Text`
  color: #fff;
  font-style: italic;
  font-weight: bold;
  flex-direction: row;

  text-align: center;
  font-size: ${(Dimensions.get('window').width / 30).toFixed(0)}px;
`;

export const ContentDescItem = styled.View`
  /* flex-direction: column; */
  /* margin-bottom: 5px; */
  /* border: #fff; */
  /* align-items:center */
`;
export const Categoria = styled.Text`
  font-size: ${(Dimensions.get('window').width / 35).toFixed(0)}px;
  font-weight: bold;
  color: #fff;
  align-self: flex-end;
  font-style: italic;
`;

export const Desc = styled.Text`
  font-size: ${(Dimensions.get('window').width / 40).toFixed(0)}px;
  color: #fff;

  font-weight: bold;
  align-self: center;
`;

export const Content = styled.View`
  flex-direction: row;
  height: ${(Dimensions.get('window').height / 4).toFixed(0)}px;
  width: ${(Dimensions.get('window').width / 2.2).toFixed(0)}px;

  justify-content: center;
  padding: 5px;
`;
