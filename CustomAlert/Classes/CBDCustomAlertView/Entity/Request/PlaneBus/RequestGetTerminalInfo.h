//
//  RequestGetTerminalInfo.h
//  CarBaDa
//
//  Created by 丁健 on 2019/7/18.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"


@interface RequestGetTerminalInfo : TCTRequestObject
@property (nonatomic, copy) NSString *airportCode;//是    机场三字码
@property (nonatomic, copy) NSString *terminalCode;//否    航站楼编码
@end

