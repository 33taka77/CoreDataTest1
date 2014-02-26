//
//  Persion.h
//  AddressBook
//
//  Created by Aizawa Takashi on 2014/02/26.
//  Copyright (c) 2014年 Aizawa Takashi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Address;

@interface Persion : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Address *address;

@end
