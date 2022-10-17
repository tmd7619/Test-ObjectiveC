//
//  ViewController.m
//  test
//
//  Created by yunseungwon on 2022/10/17.
//

#import "ViewController.h" // 헤더파일을 무조건 import 해야 함
// 헤더파일에서 import한 것은, .m 파일에서 할 필요 없음

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UIButton *aBtn;


@end

@implementation ViewController

- (IBAction)click_A:(UIButton *)sender {
    printf("A버튼이 클릭");
}
- (IBAction)click_B:(UIButton *)sender {
    printf("B버튼이 클릭");

}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [_aBtn clipsToBounds];
    // Do any additional setup after loading the view.
}


@end
