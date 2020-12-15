import styled from 'styled-components/native';
import {Dimensions,Animated} from 'react-native';

export const Container = styled.SafeAreaView`
  flex: 1;
`;

export const List = styled.ScrollView.attrs({
  horizontal: false,
  showsHorizontalScrollIndicator: false,
  contentContainerStyle: {paddingLeft: 5, paddingRight: 5},
})``;

export const ContentList = styled(Animated.View)`

`;

export const Content = styled.View`
  flex-direction: row;
`;
