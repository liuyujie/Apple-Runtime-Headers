//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface OMSlideshowMediaAttributes : NSObject <NSCoding>
{
    double _duration;
    double _scale;
    double _scale2;
    struct CGPoint _center;
    struct CGPoint _center2;
}

@property(nonatomic) double scale2; // @synthesize scale2=_scale2;
@property(nonatomic) struct CGPoint center2; // @synthesize center2=_center2;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)_writeToDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
