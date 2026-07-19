<<<<<<< HEAD
# Vimax Core

**Vimax Core** — локальное модульное ядро для диалогового ИИ-помощника, который понимает намерение пользователя и подключает нужные доменные возможности: технологические процессы, запись к мастеру, календарь, уведомления, умный дом и другие модули.

Статус: `0.1.0-alpha`

## Главный принцип

Пользователь не ищет приложение и не изучает меню. Он говорит, чего хочет:

- «Хочу сварить Гауду»
- «Сварить вкусного пивка»
- «Запиши меня к Марине на ногти в пятницу после 18:00»

Vimax Core распознаёт намерение, уточняет данные, подбирает модуль, строит безопасный план, запрашивает подтверждение значимых операций, выполняет действия и ведёт аудит.

## Архитектура

```text
User → Conversation Gateway → Intent Resolver → Policy Engine
     → Workflow Resolver → Module Registry → Modules/Connectors
     → Audit Log + Notifications
```

## Быстрый старт

```bash
cmake -S . -B build -DVIMAX_BUILD_TESTS=ON
cmake --build build
./build/vimax_demo
ctest --test-dir build --output-on-failure
```

Первая версия фиксирует контракты, маршрутизацию, безопасность и модульность. Реальные LLM, API и аппаратные адаптеры подключаются поверх интерфейсов.
=======
# Vimax

> **People shouldn't have to learn software.  
> Software should understand people.**

---

## What is Vimax?

**Vimax** is a local-first platform that transforms human intent into safe, explainable and auditable actions.

Instead of forcing people to learn applications, menus and interfaces, Vimax allows them to simply describe what they want.

Examples:

- "I want to make Gouda cheese."
- "Book me a manicure next Friday after 18:00."
- "Start the distillation process."
- "Order rennet."
- "Turn off the workshop lights."

Vimax understands the user's intent, builds a safe execution plan and delegates execution to the appropriate modules and connectors.

---

# Why Vimax?

Most software is built around applications.

Vimax is built around human intentions.

Applications are implementation details.

Intent is the real interface.

---

# Vision

Modern software expects humans to adapt to computers.

Vimax reverses that idea.

Humans communicate naturally.

Software adapts to humans.

---

# Philosophy

Vimax is not another automation framework.

It is a platform for executing real-world tasks through natural conversation.

Conversation becomes the interface.

Intent becomes the input.

Workflows become the execution model.

Modules provide domain expertise.

Policies guarantee safety.

---

# Core Principles

### Conversation First

People describe goals.

They don't search for software.

---

### Local First

Critical functionality should work without cloud services.

Cloud integration is optional.

---

### Safety Before Automation

Automation must never bypass safety.

Critical operations always require appropriate confirmation.

---

### Explainable Actions

Every decision made by Vimax should be understandable.

The system should always answer:

- Why?
- What happened?
- What happens next?

---

### Human In Control

Vimax assists people.

People always remain responsible for final decisions.

---

### Modular By Design

The platform itself knows nothing about cheese, booking, brewing or smart homes.

Knowledge lives inside independent modules.

---

# Platform Architecture

```text
                     User
                       │
                       ▼
             Conversation Engine
                       │
                       ▼
               Intent Resolver
                       │
                       ▼
               Workflow Engine
             ┌─────────┴─────────┐
             ▼                   ▼
      Context Engine      Policy Engine
             └─────────┬─────────┘
                       ▼
                  Vimax Core
                       │
        ┌──────────────┼──────────────┐
        ▼              ▼              ▼
     Modules      Connectors         SDK
```

---

# Core Components

- Conversation Engine
- Intent Resolver
- Workflow Engine
- Context Engine
- Policy Engine
- Scheduler
- Notification Engine
- Audit Engine
- Module Manager
- Connector Manager

---

# Modules

Examples of Vimax modules:

- 🧀 Cheese
- 🍺 Brewing
- 🥃 Distillation
- 📅 Booking
- 📆 Calendar
- 🏠 Smart Home
- 📦 Inventory
- 🛒 Shopping
- 📧 Email

Modules extend the platform without changing the Core.

---

# Connectors

Connectors integrate Vimax with external systems.

Examples:

- MQTT
- Home Assistant
- Google Calendar
- Telegram
- Email
- REST APIs

---

# Design Goals

- Local-first
- Explainable
- Modular
- Secure
- Extensible
- Offline-capable
- Developer-friendly

---

# Example

User

```text
I want to make Gouda cheese.
```

↓

Intent

```text
cheese.start_batch
```

↓

Workflow

```text
Create Batch

↓

Load Recipe

↓

Calculate Ingredients

↓

Start Guided Process
```

↓

Module

```text
Cheese Module
```

---

# Roadmap

## v0.1

- Core Runtime
- Module Registry
- Policy Engine
- Audit Log

## v0.2

- Intent Engine
- Context Memory
- SQLite
- Plugin Manifest
- Configuration

## v0.3

- Workflow Engine
- Scheduler
- Notifications

## v0.4

- Recipe Engine
- Booking Engine
- Connector Framework

## v0.5

- REST API
- WebSocket API
- Authentication
- Web UI

## v1.0

Production Ready

---

# Repository Structure

```text
apps/          Example applications

docs/          Documentation

include/       Public headers

modules/       Domain modules

src/           Vimax Core

tests/         Unit & integration tests
```

---

# Current Status

**Version**

```
0.1.0-alpha
```

The architecture is under active development.

Public APIs are expected to evolve before the first stable release.

---

# Mission

> **People shouldn't have to learn software.**
>
> **They should simply describe what they want to accomplish.**
>
> **Vimax turns human intent into real-world actions.**

---

# License

Business Source License 1.1 (temporary)

The licensing model will be finalized before the first production release.
>>>>>>> a881ef82ecef2647090e1a22f8bc61f6640e1258
