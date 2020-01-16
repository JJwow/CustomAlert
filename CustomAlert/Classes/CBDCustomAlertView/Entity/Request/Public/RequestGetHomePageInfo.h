//
//  RequestGetHomePageInfo.h
//  CarBaDa
//
//  Created by 丁健 on 2019/6/13.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCTRequestObject.h"

@interface RequestGetHomePageInfo : TCTRequestObject
@property (nonatomic, copy)NSString *cityId;
@property (nonatomic, copy)NSString *templateId;
@end

