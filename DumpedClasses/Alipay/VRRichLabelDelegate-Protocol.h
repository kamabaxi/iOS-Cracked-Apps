//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VRRichLabel;

@protocol VRRichLabelDelegate <NSObject>

@optional
- (void)linkPress:(VRRichLabel *)arg1 data:(id)arg2 linkRect:(struct CGRect)arg3 status:(int)arg4;
- (void)linkTaped:(VRRichLabel *)arg1 data:(id)arg2 linkRect:(struct CGRect)arg3;
@end
