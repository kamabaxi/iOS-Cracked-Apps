//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QHeatTileOverlay.h"

@class NSNumber;

@interface ONESQHeatTileOverlay : QHeatTileOverlay
{
    NSNumber *_max_value;
    NSNumber *_min_value;
}

@property(retain, nonatomic) NSNumber *min_value; // @synthesize min_value=_min_value;
@property(retain, nonatomic) NSNumber *max_value; // @synthesize max_value=_max_value;
- (void).cxx_destruct;
- (float)minValue;
- (float)maxValue;
- (void)colorForValue:(double)arg1 outRed:(double *)arg2 outGreen:(double *)arg3 outBlue:(double *)arg4 outAlpha:(double *)arg5;

@end
