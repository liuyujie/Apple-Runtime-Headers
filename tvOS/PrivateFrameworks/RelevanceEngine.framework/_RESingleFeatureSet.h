//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RelevanceEngine/REFeatureSet.h>

@class REFeature;

@interface _RESingleFeatureSet : REFeatureSet
{
    REFeature *_feature;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)allFeatures;
- (_Bool)containsFeature:(id)arg1;
- (id)featureWithName:(id)arg1;
- (unsigned long long)count;
- (id)initWithFeature:(id)arg1;
- (id)init;
- (id)initWithFeatures:(id)arg1;

@end

