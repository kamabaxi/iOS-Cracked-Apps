//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KKCanvasElement.h"

@interface KKTextElement : KKCanvasElement
{
}

+ (id)elementWithAttributedString:(id)arg1;
+ (struct KKProperty *)propertyWithContent;
+ (id)elementWithName:(id)arg1 parent:(id)arg2;
- (id)copyElementWithZone:(struct _NSZone *)arg1;
- (id)setNeedsDisplay;
- (id)append:(id)arg1;
- (id)addImage:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)addText:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)withText:(CDUnknownBlockType)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)property:(struct KKProperty *)arg1 changedValue:(id)arg2;
- (id)initWithAttributedString:(id)arg1;
- (id)attributes;

@end

