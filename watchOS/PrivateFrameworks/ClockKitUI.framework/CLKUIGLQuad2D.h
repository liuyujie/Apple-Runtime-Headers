//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClockKitUI/CLKUIQuad2D.h>

@class CLKUIGLProgram;

@interface CLKUIGLQuad2D : CLKUIQuad2D
{
    unsigned int _isPrepared:1;
    unsigned int _vertexArray;
    unsigned int _vertexBuffer;
    unsigned int _primaryTexture;
    unsigned int _secondaryTexture;
    CLKUIGLProgram *_program;
}

- (void).cxx_destruct;
- (void)encodeGLforSize:(struct CLKUIQuadSize)arg1;
- (void)purge;
- (void)prepare;
- (void)_deleteVertexArray;
- (void)_createVertexArray;

@end
