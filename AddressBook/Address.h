//
//  Address.h
//  AddressBook
//
//  Created by Aizawa Takashi on 2014/02/26.
//  Copyright (c) 2014年 Aizawa Takashi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Persion;

@interface Address : NSManagedObject

@property (nonatomic, retain) NSString * zipCode;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * other;
@property (nonatomic, retain) Persion *person;

@end
