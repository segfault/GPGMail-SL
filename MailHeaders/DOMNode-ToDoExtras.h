/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "DOMNode.h"

@interface DOMNode (ToDoExtras)
- (id)previousToDoElement;
- (id)nextToDoElement;
- (id)closestToDoElementDownstream:(char *)arg1;
- (id)_elementsWithIDPrefix:(id)arg1 className:(id)arg2;
- (id)todoIDs;
- (id)todoElements;
- (id)frozenToDoIDs;
- (id)frozenToDoElements;
- (id)enclosingToDoElement;
- (BOOL)isToDoElement;
- (BOOL)isFrozenToDoElement;
- (BOOL)isToDoBodyElement;
- (BOOL)isToDoContentElement;
- (id)frozenToDoContentElement;
- (id)rangeBeforeToDo;
- (id)rangeAfterToDo;
- (id)visualRangeBeforeToDo;
- (id)visualRangeAfterToDo;
- (id)contentRange;
- (id)todoUserContentRange;
- (id)todoUserContent;
- (void)setTodoUserContent:(id)arg1;
- (id)todoBodyElement;
- (id)todoCheckboxElement;
- (id)todoDateElement;
- (id)todoContentElementIfExists;
- (BOOL)containsToDoContentElement;
- (id)todoContentElement;
- (id)todoRowElement;
- (id)todoDeleteElement;
- (id)todoDeleteDivElement;
- (void)flattenTodoElements;
- (BOOL)todoDeleteButtonIsVisible;
- (void)setTodoDeleteButtonIsVisible:(BOOL)arg1;
@end
