//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UniformLog;

@interface QQThirdAppShareContext : NSObject
{
    _Bool _qqShareResultShow;
    unsigned int _pluginAppID;
    NSString *_pluginAppName;
    id _leftBtnClickTarget;
    SEL _leftBtnClickSel;
    long long _ctrlType;
    UniformLog *_shareChooseLog;
}

@property(retain, nonatomic) UniformLog *shareChooseLog; // @synthesize shareChooseLog=_shareChooseLog;
@property(nonatomic) _Bool qqShareResultShow; // @synthesize qqShareResultShow=_qqShareResultShow;
@property(nonatomic) long long ctrlType; // @synthesize ctrlType=_ctrlType;
@property(nonatomic) SEL leftBtnClickSel; // @synthesize leftBtnClickSel=_leftBtnClickSel;
@property(nonatomic) id leftBtnClickTarget; // @synthesize leftBtnClickTarget=_leftBtnClickTarget;
@property(retain, nonatomic) NSString *pluginAppName; // @synthesize pluginAppName=_pluginAppName;
@property(nonatomic) unsigned int pluginAppID; // @synthesize pluginAppID=_pluginAppID;
- (void)dealloc;

@end

