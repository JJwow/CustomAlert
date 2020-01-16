//
//  IdentityInfo.h
//  CarBaDa
//
//  Created by Alex on 15/6/23.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface identityInfo : NSObject<NSCopying>
@property (nonatomic,strong) NSString *certTypeId;
@property (nonatomic,strong) NSString *certTypeName;
@property (nonatomic,strong) NSString *certNumberTrue;
@property (nonatomic,strong) NSString *certNumber;

+(identityInfo*)initWithTypeNumber:(NSString*)typeId  numberTrue:(NSString*)sNumberTrue;

@end
