//
//  RequestConfirmActivation.h
//  CarBaDa
//
//  Created by 丁健 on 2019/9/2.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"


@interface RequestConfirmActivation : TCTRequestObject
@property (nonatomic, copy)NSString *appid;//1007030042
@property (nonatomic, copy)NSString *idfa;
@end

