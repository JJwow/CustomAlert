//
//  RequestCheckmobile.h
//  CarBaDa
//
//  Created by Alex on 6/15/15.
//  Copyright (c) 2015 wyj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TCTNetworkEngine.h"

@interface RequestCheckmobile : TCTRequestObject
@property (nonatomic,strong) NSString *mobileNo;
@end
