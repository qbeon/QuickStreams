#pragma once

#include "Stream.hpp"
#include <QObject>
#include <QQmlEngine>
#include <QJSValue>

namespace streams {

class Streams : public QObject {
	Q_OBJECT

protected:
	QQmlEngine* _engine;

public:
	explicit Streams(QQmlEngine* engine, QObject* parent = nullptr);
	Q_INVOKABLE Stream* create(const QJSValue& target);

	//TODO: implement
	// Join returns a new stream that's closed when all given sub-streams
	// are closed. If either of them fails the returned stream will fail.
	// If either of them is canceled the returned stream will fail as well	.
	/*
	Q_INVOKABLE Stream* join(...);
	*/
};

} // streams