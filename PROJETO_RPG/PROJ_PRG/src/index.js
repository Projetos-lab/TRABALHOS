import React from 'react';
import {StatusBar} from 'react-native';

import '~/config/ReactotronConfig';

import {Provider} from 'react-redux';
import store from './store';
import Background from '~/components/Background'
import Routes from '~/routes';

const App = () => (
  <Provider store={store}>
    <Background>
    <StatusBar barStyle ="light-content" backgroundColor = "#000000"/>
      <Routes />
    </Background>
  </Provider>
);

export default App;
