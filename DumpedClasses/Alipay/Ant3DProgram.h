//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface Ant3DProgram : NSObject
{
    NSMutableArray *_attributes;
    NSMutableArray *_uniforms;
    unsigned int _program;
    unsigned int _vertShader;
    unsigned int _fragShader;
}

- (void).cxx_destruct;
- (void)releaseShaders;
- (void)teardown;
- (unsigned int)getUniform:(id)arg1;
- (unsigned int)getAttribute:(id)arg1;
- (void)addAttribute:(id)arg1;
- (void)link;
- (void)use;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)dealloc;

@end
