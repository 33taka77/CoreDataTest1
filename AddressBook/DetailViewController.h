//
//  DetailViewController.h
//  AddressBook
//
//  Created by Aizawa Takashi on 2014/02/26.
//  Copyright (c) 2014年 Aizawa Takashi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Persion.h"


@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (strong, nonatomic) IBOutlet UIScrollView* scrollView;
@property (strong, nonatomic) IBOutlet UITextField* nameField;
@property (strong, nonatomic) IBOutlet UITextField* zipCodeField;
@property (strong, nonatomic) IBOutlet UITextField* stateField;
@property (strong, nonatomic) IBOutlet UITextField* cityField;
@property (strong, nonatomic) IBOutlet UITextField* otherField;

@end
