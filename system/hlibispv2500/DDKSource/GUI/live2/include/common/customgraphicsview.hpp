#ifndef CUSTOMGRAPHICSVIEW_H
#define CUSTOMGRAPHICSVIEW_H

#include <qgraphicsview.h>

namespace VisionLive
{

class CustomGraphicsView: public QGraphicsView
{
	Q_OBJECT

public:
	CustomGraphicsView(QGraphicsView *parent = 0); // Class condtructor
	~CustomGraphicsView(); // Class destructor

	void setAspectRatio(Qt::AspectRatioMode ratio); // Sets aspect ratio - uset when resizing
	void setZoomingEnabled(bool zooming); // Enables/disables zooming

protected:
	void resizeEvent(QResizeEvent *event); // Called on resize event
	void wheelEvent(QWheelEvent *event); // Called on mouse wheel move event
	void mousePressEvent(QMouseEvent *event); // Called on mouse press event

private:
	Qt::AspectRatioMode _ratio;

	// Zoom params
	bool _enableZoom; // Enabled zooming
    double _currentZoom; // Current zoom value
    double _minZoom; // Minimum possible zoom
    double _maxZoom; // Maximum possible zoom
    double _stepZoom; // Zoom step when a wheel event is captured

signals:
	void mousePressed(QPointF pos, Qt::MouseButton button);

};

} // namespace VisionLive

#endif // CUSTOMGRAPHICSVIEW_H