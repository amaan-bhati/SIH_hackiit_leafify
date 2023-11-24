import React from 'react';
import { BrowserRouter as Router, Switch, Route } from 'react-router-dom';

import Home from './components/Home';
import About from './components/About';
import HowToUse from './components/HowToUse';
import Scan from './components/Scan';
import ContactUs from './components/ContactUs.js';
import RealTimeScan from './components/RealTimeScan';

function App() {
  return (
    <Router>
      <Switch>
        <Route path="/" exact component={Home} />
        <Route path="/about" component={About} />
        <Route path="/how-to-use" component={HowToUse} />
        <Route path="/scan" component={Scan} />
        <Route path="/contact-us" component={ContactUs} />
        <Route path="/realtimescan" component={RealTimeScan} />
      </Switch>
    </Router>
  );
}

export default App;
