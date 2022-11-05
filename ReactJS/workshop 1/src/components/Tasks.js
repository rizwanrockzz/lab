import React from 'react'
import Task from './Task'

const Tasks = ({tasks}) => {
    return (
        <div id='tasks'>
            {tasks.map((task)=>{
                return <Task task={task}/>
            })}
        </div>
    )
}

export default Tasks