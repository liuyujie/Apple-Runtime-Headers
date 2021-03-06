//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSDataItem.h"
#import "NSObject.h"
#import "_IKJSDataItemProxy.h"

@class JSManagedValue, NSArray, NSMutableArray, NSString;

@interface IKJSDataItem : IKJSObject <NSObject, IKJSDataItem, _IKJSDataItemProxy>
{
    NSMutableArray *_observerRecords;
    NSString *_type;
    NSString *_identifier;
    JSManagedValue *_managedObject;
    _Bool _observersEnabled;
    IKJSDataItem *_parent;
    NSArray *_parentAccessorSequence;
}

+ (id)boxObject:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *parentAccessorSequence; // @synthesize parentAccessorSequence=_parentAccessorSequence;
@property(nonatomic) _Bool observersEnabled; // @synthesize observersEnabled=_observersEnabled;
@property(readonly, nonatomic) __weak IKJSDataItem *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (_Bool)_isBoxed;
- (id)_clonedObserverRecords;
- (void)_notifyObserversForSubpathString:(id)arg1 inDataItem:(id)arg2;
- (void)_notifyObserversForPathString:(id)arg1;
- (void)_setParent:(id)arg1 accessorSequence:(id)arg2;
- (id)_valueForAccessorSequence:(id)arg1 closestParent:(id *)arg2 accessorSequenceFromClosestParent:(id *)arg3;
- (void)touchPropertyPath:(id)arg1;
- (id)getPropertyPath:(id)arg1;
- (void)setPropertyPath:(id)arg1:(id)arg2;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *type;
- (id)initWithType:(id)arg1:(id)arg2;
- (void)addObserver:(id)arg1 forSubscriptsOfPropertyPathWithString:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 forPropertyPathWithString:(id)arg2;
- (void)resetValueForPropertyPath:(id)arg1;
- (id)valuesForSubscripts:(struct _NSRange)arg1 ofPropertyPath:(id)arg2;
- (id)valueForPropertyPath:(id)arg1;
- (void)setValue:(id)arg1 forPropertyPath:(id)arg2;
- (id)unbox;
- (id)initWithObject:(id)arg1;
- (id)asPrivateIKJSDataItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

