/*NEED HELP WITH TEMPLATEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE*/
/*REEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE*/
#pragma once

namespace strukdat {

namespace priority_queue {

/**
 * @brief Implementasi struct untuk elemen, harus ada isi dan prioritas elemen.
 */
template <typename T>
struct Element {
  int data;
  int priority;

  T *next;
};

template <typename T>
using ElementPtr = Element<T> *;

/**
 * @brief implemetasi struct untuk queue.
 */
template <typename T>
struct Queue {
  T.head;
  T.tail;
};
/**
 * @brief membuat queue baru
 *
 * @return  queue kosong
 */
template <typename T>
Queue<T> new_queue() {
  T.head = nullptr;
  T.tail = nullptr;  
}

template <typename T>
bool isEmpty(Queue<T> &q){
  if(q.head == nullptr && q.tail == nullptr){
    return true;
  }
  return false;
}

/**
 * @brief memasukan data sesuai priority elemen.
 *
 * @param q         queue yang dipakai.
 * @param value     isi dari elemen.
 * @param priority  prioritas elemen yang menentukan urutan.
 */
template <typename T>
void enqueue(Queue<T> &q, const T &value, int priority) {
  q = new Element<T>;
  q->data = value;
  q->priority = priority;
  q->next = nullptr;
}

/**
 * @brief mengembalikan isi dari elemen head.
 *
 * @param q   queue yang dipakai.
 * @return    isi dari elemen head.
 */
template <typename T>
T top(const Queue<T> &q) {
  return q.head->data;
}

/**
 * @brief menghapus elemen head queue (First in first out).
 *
 * @param q   queue yang dipakai.
 */
template <typename T>
void dequeue(Queue<T> &q) {
  Element<T> = delElement;
  if(isEmpty(Q)){
    delElement = nullptr;
  }else if(q.head->next == nullptr){
    delElement = q.head;
    q.head = nullptr;
    q.tail = nullptr;
  }else{
    delElement = q.head;
    q.head = q.head->next;
    delElement->next = nullptr;
  }
}

}  // namespace priority_queue

}  // namespace strukdat
