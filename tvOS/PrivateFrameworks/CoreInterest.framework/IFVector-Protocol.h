//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFVectorOperating.h"
#import "NSCopying.h"
#import "NSObject.h"

@protocol IFVector <NSObject, NSCopying, IFVectorOperating>
+ (id <IFVector>)vectorWithElements:(double *)arg1 length:(unsigned long long)arg2;
+ (id <IFVector>)ones:(unsigned long long)arg1;
+ (id <IFVector>)zeros:(unsigned long long)arg1;
@property(readonly) unsigned long long length;
@property(readonly) double *vector;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end
