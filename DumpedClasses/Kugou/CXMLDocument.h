//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CXMLNode.h"

@class NSMutableSet;

@interface CXMLDocument : CXMLNode
{
    NSMutableSet *nodePool;
}

- (id)description;
- (id)XMLStringWithOptions:(unsigned long long)arg1;
- (id)XMLDataWithOptions:(unsigned long long)arg1;
- (id)XMLData;
- (id)rootElement;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithXMLString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)nodePool;
- (void)addChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;

@end

