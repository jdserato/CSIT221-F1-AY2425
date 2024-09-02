struct Point {
	float x;
	float y;
	
	// implement midpoint here
	Point midpoint(Point other) {
		int x = 99;
		Point res;
		res.x = (this->x + other.x) / 2;
		res.y = (y + other.y) / 2;
		return res;
	}
};
