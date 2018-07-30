//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ARFrame;

@interface ARSCNCompositor : NSObject
{
    _Bool _showOcclusionGeometry;
    unsigned long long _uncertaintyRadius;
    unsigned long long _erodeRadius;
    ARFrame *_currentFrame;
    long long _mode;
    unsigned long long _foregroundBitMask;
    long long _currentOrientation;
}

@property(nonatomic) _Bool showOcclusionGeometry; // @synthesize showOcclusionGeometry=_showOcclusionGeometry;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) unsigned long long foregroundBitMask; // @synthesize foregroundBitMask=_foregroundBitMask;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) ARFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(nonatomic) unsigned long long erosionRadius; // @synthesize erosionRadius=_erodeRadius;
@property(nonatomic) unsigned long long uncertaintyRadius; // @synthesize uncertaintyRadius=_uncertaintyRadius;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithView:(id)arg1 mode:(long long)arg2;

@end
