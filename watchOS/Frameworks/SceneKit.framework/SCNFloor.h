//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNFloor : SCNGeometry
{
    unsigned int _isPresentationInstance:1;
    unsigned int _usesCustomScaleFactor:1;
    float _reflectivity;
    float _reflectionFalloffStart;
    float _reflectionFalloffEnd;
    unsigned int _reflectionCategoryBitMask;
    float _width;
    float _length;
    float _reflectionResolutionScaleFactor;
    unsigned int _reflectionSampleCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)floor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNFloor:(id)arg1;
-     // Error parsing type: ^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}8@0:4, name: __createCFObject
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setReflectionFallOffEnd:(float)arg1;
- (void)setReflectionFallOffStart:(float)arg1;
- (float)reflectionFallOffEnd;
- (float)reflectionFallOffStart;
@property(nonatomic) float reflectivity;
- (void)setReflectionSampleCount:(unsigned int)arg1;
- (unsigned int)reflectionSampleCount;
@property(nonatomic) float reflectionResolutionScaleFactor;
@property(nonatomic) float reflectionFalloffStart;
@property(nonatomic) float reflectionFalloffEnd;
@property(nonatomic) float length;
- (float)height;
- (void)setHeight:(float)arg1;
@property(nonatomic) float width;
@property(nonatomic) unsigned int reflectionCategoryBitMask;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
-     // Error parsing type: ^{__C3DFloor={__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}ffffifffI}8@0:4, name: floorRef
- (void)dealloc;
-     // Error parsing type: @12@0:4^{__C3DFloor={__C3DGeometry={__C3DEntity={__CFRuntimeBase=IAI}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}i}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v}C}ffffifffI}8, name: initWithFloorGeometryRef:
- (id)init;
- (void)_syncObjCModel;

@end

