//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DRCAdditionalData, NSString;

@interface DRCBaseModel : JSONModel
{
    NSString *_code;
    NSString *_msg;
    DRCAdditionalData *_additionalData;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) DRCAdditionalData *additionalData; // @synthesize additionalData=_additionalData;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end
