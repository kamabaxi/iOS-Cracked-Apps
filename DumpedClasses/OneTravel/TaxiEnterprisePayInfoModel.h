//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TaxiEnterprisePayInfoModel : TaxiBaseModel
{
    NSNumber<Optional> *_status;
    NSString<Optional> *_describe;
    NSNumber<Optional> *_reimburse_status;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber<Optional> *reimburse_status; // @synthesize reimburse_status=_reimburse_status;
@property(copy, nonatomic) NSString<Optional> *describe; // @synthesize describe=_describe;
@property(retain, nonatomic) NSNumber<Optional> *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end
