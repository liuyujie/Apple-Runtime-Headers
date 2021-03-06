//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface _UIKBRTFingerInfo : NSObject <NSCopying>
{
    _Bool _unknownSeen;
    float _radius;
    unsigned int _identity;
    struct CGPoint _location;
    double _lastSeenTimestamp;
}

@property(nonatomic) _Bool unknownSeen; // @synthesize unknownSeen=_unknownSeen;
@property(nonatomic) unsigned int identity; // @synthesize identity=_identity;
@property(nonatomic) double lastSeenTimestamp; // @synthesize lastSeenTimestamp=_lastSeenTimestamp;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(readonly, nonatomic) float feedbackAlpha;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

