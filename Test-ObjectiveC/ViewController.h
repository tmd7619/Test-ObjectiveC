//
//  ViewController.h
//  test
//
//  Created by yunseungwon on 2022/10/17.
//

#import <UIKit/UIKit.h>//외부 라이브러리, 프레임워크 뿐만 아니라 프로젝트 내에 선언된 클래스 등을 불러올 때도 꼭 import를 해주어야함
// swift는 프로젝트 전체가 namespace 범위로 지정되어 있기 때문에, 일일히 객체를 import를 해주지 않아도 사용이 가능함

@interface ViewController : UIViewController{
    NSString *name;
    
}
// 어떤 클래스를 상속받고, 어떤 변수와 메서드를 쓸건지 여기서 선언
// @interface 대괄호 안에 선언되는 변수는 Instance variable 변수임
// 이 전역 변수의 기본 접근 지시자는 protected
// 이쪽에 선언한 변수는 내부 접근 위주


// @property의 특징은 get/setter를 자동으로 생성
// 외부 접근 가능 변수
@property NSString *alias;

//- (void) name; // 메서드 선언
//---------------- header 부 -----------------------------
// header 부에는 선언만 가능 (변수 초기화 x)
//------------------------------------------------------


@end

