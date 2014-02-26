//
//  DetailViewController.h
//  AddressBook
//
//  Created by Aizawa Takashi on 2014/02/26.
//  Copyright (c) 2014年 Aizawa Takashi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
