//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSNumber, NSString;

@interface ESPEntryRedEnvelope : NVMModel
{
    NSString *_name;
    NSNumber *_amount;
    NSString *_sumCondition;
    NSString *_expireInfo;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *expireInfo; // @synthesize expireInfo=_expireInfo;
@property(copy, nonatomic) NSString *sumCondition; // @synthesize sumCondition=_sumCondition;
@property(retain, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

