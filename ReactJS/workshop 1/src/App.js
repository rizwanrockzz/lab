import Header from './components/Header';
import Footer from './components/Footer';
import Tasks from './components/Tasks';
import React from 'react';
import { useState } from 'react';

function App() {
  let [tasks, settasks] = useState([
    { id: 1, title: "title 1", notes: "Enter description", remainder: true },
    { id: 2, title: "title 2", notes: "Enter description", remainder: false },
    { id: 3, title: "title 3", notes: "Enter description", remainder: true },
    { id: 4, title: "title 4", notes: "Enter description", remainder: false }
  ])
  return (
    <React.Fragment>
      <Header />
      {/* {console.log(tasks)} */}
      <Tasks tasks={tasks} />
      <Footer />
    </React.Fragment>
  );
}

export default App;
