package sphere;

import java.awt.event.MouseEvent;
import java.awt.event.MouseMotionListener;

public class GraphicsController implements MouseMotionListener {
    //该控制器所控制的Sphere对象
    private Sphere sphere;
    
    public GraphicsController(Sphere sphere) {
    	this.sphere = sphere;
	}

	@Override
	public void mouseDragged(MouseEvent e) {
		// TODO Auto-generated method stub
		
		int x = e.getX();
		int y = e.getY();
		
		double r = (x>y?x:y)/2;
		
		this.sphere.setRadius(r);
		
	}

	@Override
	public void mouseMoved(MouseEvent e) {
		// TODO Auto-generated method stub
		
	}

}
