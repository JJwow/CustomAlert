//
//  ResquestGetInsurances.h
//  CarBaDa
//
//  Created by Jabir on 15/11/26.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetInsurances : TCTRequestObject
@property (nonatomic,copy) NSString *projectType;
@property (nonatomic,copy) NSString *cityName;
@property (nonatomic,copy) NSString *ticketAmount;

@end
