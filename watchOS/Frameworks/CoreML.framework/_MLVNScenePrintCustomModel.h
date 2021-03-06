//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLCustomModel.h"

@class MLModelConfiguration, MLModelDescription;

__attribute__((visibility("hidden")))
@interface _MLVNScenePrintCustomModel : NSObject <MLCustomModel>
{
    MLModelDescription *_modelDescription;
    int _scenePrintRequestRevision;
    MLModelConfiguration *_configuration;
}

@property(readonly, nonatomic) MLModelConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) int scenePrintRequestRevision; // @synthesize scenePrintRequestRevision=_scenePrintRequestRevision;
@property(readonly, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)featureValueFromScenePrint:(id)arg1 elementSize:(unsigned int)arg2;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;

@end

