//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDContactShadow.h>

#import "TSDMutableShadow.h"

__attribute__((visibility("hidden")))
@interface TSDMutableContactShadow : TSDContactShadow <TSDMutableShadow>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double perspective; // @dynamic perspective;
@property(nonatomic) double height; // @dynamic height;
- (void)setColor:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setOffset:(double)arg1;
- (void)setAngle:(double)arg1;

@end

