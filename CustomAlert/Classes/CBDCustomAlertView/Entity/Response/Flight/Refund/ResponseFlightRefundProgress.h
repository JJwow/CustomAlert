//
//  ResponseFlightRefundProgress.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/5/8.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseSearchFlightlist.h"

NS_ASSUME_NONNULL_BEGIN

@class flightPassengers;

@interface refundTrackItems : NSObject

@property (nonatomic, strong) NSString *trackStateDesc;
@property (nonatomic, strong) NSString *trackStateRemark;
@property (nonatomic, strong) NSString *hightLight;

@end

@interface productAmountDetail : NSObject

@property (nonatomic, strong) NSString *productName;
@property (nonatomic, strong) NSString *productAmount;

@end

@interface feeAmountDetail : NSObject

@property (nonatomic, strong) NSString *feeName;
@property (nonatomic, strong) NSString *feeAmount;

@end



@interface refundAmountDetail : NSObject

@property (nonatomic, strong) NSString *productTotalAmount;
@property (nonatomic, strong) NSString *feeTotalAmount;
@property (nonatomic, strong) NSMutableArray *productAmountDetail;
@property (nonatomic, strong) NSMutableArray *feeAmountDetail;

@end

@interface flight : flights

@end



@interface ResponseFlightRefundProgress : TCTResponseObject

@property (nonatomic, strong) NSString *isFeeSuccess;
@property (nonatomic, strong) NSString *refundAmount;         //退票金额
@property (nonatomic, strong) NSString *showInvoiceState;     //发票显示状态(0:不显示开票;1:未申请;2:已申请)
@property (nonatomic, strong) NSString *refundState;          //退票状态  0 等待退票 1 退票中 2 退票成功 3 退票失败
@property (nonatomic, strong) NSString *invoiceSerialId;      //发票邮寄流水号

@property (nonatomic, strong) NSString *isShowAmount;

@property (nonatomic, strong) NSMutableArray *refundTrackItems;
@property (nonatomic, strong) refundAmountDetail *refundAmountDetail;
@property (nonatomic, strong) flight *flight;

@property (nonatomic, strong) NSMutableArray *flightPassengers;


@end

NS_ASSUME_NONNULL_END
