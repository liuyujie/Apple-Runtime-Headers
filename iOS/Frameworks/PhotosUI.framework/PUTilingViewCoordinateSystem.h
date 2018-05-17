//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUTilingCoordinateSystem.h"

@class NSString, PUTilingView;

__attribute__((visibility("hidden")))
@interface PUTilingViewCoordinateSystem : NSObject <PUTilingCoordinateSystem>
{
    PUTilingView *_tilingView;
}

@property(readonly, nonatomic) __weak PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGPoint coordinateSystemOrigin;
@property(readonly, nonatomic) __weak id <PUTilingCoordinateSystem> parentCoordinateSystem;
- (id)initWithTilingView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
