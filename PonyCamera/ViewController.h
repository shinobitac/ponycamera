//
//  ViewController.h
//  PonyCamera
//
//  Created by TNMacBook on 11/05/15.
//  Copyright (c) 2015 TNMacBook. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIButton *btnTomarFoto;
@property (weak, nonatomic) IBOutlet UIButton *btnElegirFoto;
@end

