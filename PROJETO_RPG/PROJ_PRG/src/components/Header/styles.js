import { View } from 'react-native';
import styled from 'styled-components/native';

export const Container = styled.View`
justify-content: flex-start;
align-items: center;
margin-bottom: 5px;
margin-top: 5%;

border-color: #fff;
border-width: 1px;
padding: 5px;
`;

export const ContentImagem = styled.View`
padding: 5px;
/* border-color: #fff;
border-width: 1px; */
`;

export const Name = styled.Text`
margin: 15px;
color: #fff;
font-size: 20px;
font-weight: bold;
font-family: sans-serif;
`;


export const ContentInfo = styled.View`

flex-direction: column;
padding-left: 15px;
/* border-color: #fff;
border-width: 1px; */
`;
export const ContentHeader = styled.View`
margin-left: 3%;
margin-right: 3%;
justify-content: space-between;
flex-direction: row;
`;

export const Contentname = styled.View`
flex: 1;
align-items:center;
justify-content:center;
`;

export const ContentClass = styled.View`
padding: 15px;
align-items: center;
/* position: absolute; */

`;
export const Class = styled.Text`
color: #fff;
font-size: 15px;
font-weight: bold;
`;
