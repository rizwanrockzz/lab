import React from 'react'
import { Button, Card } from 'react-bootstrap';

const Task = (props) => {
    // { console.log(props) }
    return (
        <Card style={{ width: '14rem' }}>
            <br />
            {/* <Card.Img variant="top" src="https://images.unsplash.com/photo-1611224923853-80b023f02d71?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=739&q=80" /> */}
            <Card.Body>
                <Card.Title>{props.task.title}</Card.Title>
                <Card.Text>
                    {props.task.notes}
                </Card.Text>
                <Button variant="info">Primary</Button>
            </Card.Body>
            <br />
        </Card>
    )
}

export default Task