//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RWIProtocolDOMNode.h"

@interface RWIProtocolDOMNode (IKJSInspector)
+ (id)ik_nodeFromDOMNode:(id)arg1;
+ (id)ik_nodeFromDOMNode:(id)arg1 depth:(int)arg2;
- (void)ik_updateWithDOMNode:(id)arg1 fullfillChildren:(_Bool)arg2 dispatcher:(id)arg3;
- (void)ik_updateWithDOMNode:(id)arg1 dispatcher:(id)arg2;
- (id)ik_nodeWithNodeId:(int)arg1;
- (id)ik_description;
- (void)ik_insertChild:(id)arg1 before:(id)arg2;
- (void)ik_removeChildWithId:(int)arg1;
- (void)ik_removeAttributeNamed:(id)arg1;
- (void)ik_setAttributeValue:(id)arg1 name:(id)arg2;
- (id)ik_attributesDictionary;
@end

